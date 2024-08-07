#include <iostream>
#include <cmath>
using namespace std;
//copied from chatgpt
class SimpleCalculator {
protected:
    double a, b;

public:
    void getInput() {
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
    }

    void displayResults() {
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
    }

private:
    double add() {
        return a + b;
    }

    double subtract() {
        return a - b;
    }

    double multiply() {
        return a * b;
    }

    double divide() {
        if (b != 0)
            return a / b;
        else
            return NAN; // Return NaN if division by zero
    }
};

class ScientificCalculator {
protected:
    double a, b;

public:
    void getInput() {
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
    }

    void displayResults() {
        cout << "Power: " << power() << endl;
        cout << "Square Root of first number: " << sqrtA() << endl;
        cout << "Square Root of second number: " << sqrtB() << endl;
        cout << "Logarithm of first number: " << logA() << endl;
        cout << "Logarithm of second number: " << logB() << endl;
    }

private:
    double power() {
        return pow(a, b);
    }

    double sqrtA() {
        return sqrt(a);
    }

    double sqrtB() {
        return sqrt(b);
    }

    double logA() {
        return log(a);
    }

    double logB() {
        return log(b);
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
public:
    void getInput() {
        SimpleCalculator::getInput();
        // For the scientific operations to work, ensure the same input is used.
        ScientificCalculator::a = SimpleCalculator::a;
        ScientificCalculator::b = SimpleCalculator::b;
    }

    void displayResults() {
        cout << "Simple Calculator Results:" << endl;
        SimpleCalculator::displayResults();
        cout << "\nScientific Calculator Results:" << endl;
        ScientificCalculator::displayResults();
    }
};

int main() {
    HybridCalculator calculator;
    calculator.getInput();
    calculator.displayResults();
    return 0;
}
