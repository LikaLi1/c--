#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "\nSelect an option:\n";
        cout << "1 - Calculate the number of lines of code needed for desired income and lateness\n";
        cout << "2 - Calculate how many times Vasya can be late based on lines written and desired salary\n";
        cout << "3 - Determine salary amount and whether the company will pay\n";
        cout << "0 - Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 1) {
            int missed;
            double desired_income;
            cout << "Enter the desired income ($): ";
            cin >> desired_income;
            cout << "Enter the number of lateness instances: ";
            cin >> missed;

            double total_salary_per_100_lines = 50;
            double penalty_per_third_late = 20;
            int total_penalties = (missed / 3) * penalty_per_third_late;

            double income_needed = desired_income + total_penalties;
            int lines_needed = static_cast<int>((income_needed / total_salary_per_100_lines) * 100);
            cout << "You need to write at least " << lines_needed << " lines.\n";

        }
        else if (choice == 2) {
            int lines_written, missed;
            double salary_desired;
            cout << "Enter the number of lines Vasya has written: ";
            cin >> lines_written;
            cout << "Enter the desired income ($): ";
            cin >> salary_desired;
            cout << "Enter the number of lateness instances: ";
            cin >> missed;

            double total_salary_per_100_lines = 50;
            double salary_without_penalties = (lines_written / 100.0) * total_salary_per_100_lines;
            double total_penalties = (missed / 3) * 20;

            double total_salary = salary_without_penalties - total_penalties;
            int max_missed = missed;
            int possible_missed = 0;
            for (int i = 0; i <= missed; i++) {
                double penalty = (i / 3) * 20;
                double sal = salary_without_penalties - penalty;
                if (sal >= salary_desired) {
                    possible_missed = i;
                }
            }
            cout << "Vasya can be late no more than " << possible_missed << " times to achieve the desired salary.\n";

        }
        else if (choice == 3) {
            int lines_written, missed;
            cout << "Enter the number of lines Vasya has written: ";
            cin >> lines_written;
            cout << "Enter the number of lateness instances: ";
            cin >> missed;

            double total_salary_per_100_lines = 50;
            double salary_without_penalties = (lines_written / 100.0) * total_salary_per_100_lines;
            double total_penalties = (missed / 3) * 20;
            double total_salary = salary_without_penalties - total_penalties;

            if (total_salary > 0) {
                cout << "Vasya will receive $" << total_salary << ". The company pays.\n";
            }
            else {
                cout << "Vasya will not receive money or the company does not pay.\n";
            }
        }

    } while (choice != 0);

    return 0;
}
