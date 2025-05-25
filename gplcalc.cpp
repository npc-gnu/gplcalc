#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A;
    cout << "Choose an option: 1. Basic operations, 2. Advanced operations, 3. Triangle operations." << endl;
    cin >> A;

    switch (A) {
        case 1: {
            int B;
            cout << "Choose an option: 1. Addition, 2. Subtraction, 3. Multiplication, 4. Division" << endl;
            cin >> B;

            switch (B) {
                case 1: {
                    cout << "Enter the numbers to add. Type '=' to finish." << endl;
                    float sum = 0;
                    string input;

                    while (true) {
                        cout << ">> ";
                        cin >> input;

                        if (input == "=") break;

                        try {
                            float number = stof(input);
                            sum += number;
                        } catch (...) {
                            cout << "Invalid input! Enter a number or finish with '='." << endl;
                        }
                    }

                    cout << "Sum: " << sum << endl;
                    break;
                }

                case 2: {
                    cout << "Enter: 1. Minuend, then 2. Subtrahend." << endl;
                    float N, U;
                    cin >> N >> U;
                    cout << N - U << endl;
                    break;
                }

                case 3: {
                    cout << "Enter 2 numbers." << endl;
                    float X, G;
                    cin >> X >> G;
                    cout << X * G << endl;
                    break;
                }

                case 4: {
                    cout << "Type 1 for integer division, 2 for decimal division." << endl;
                    int P;
                    cin >> P;

                    switch (P) {
                        case 1: {
                            cout << "Enter: 1. Dividend, then 2. Divisor." << endl;
                            int I, O;
                            cin >> I >> O;
                            if (O == 0)
                                cout << "Division by zero is not allowed!" << endl;
                            else
                                cout << I / O << endl;
                            break;
                        }
                        case 2: {
                            cout << "Enter: 1. Dividend, then 2. Divisor." << endl;
                            float I, O;
                            cin >> I >> O;
                            if (O == 0.0)
                                cout << "Division by zero is not allowed!" << endl;
                            else
                                cout << I / O << endl;
                            break;
                        }
                        default:
                            cout << "Invalid selection!" << endl;
                    }
                    break;
                }

                default:
                    cout << "Invalid option!" << endl;
            }
            break;
        }

        case 2: {
            int C;
            cout << "Choose an option: 1. Square Root, 2. Exponentiation." << endl;
            cin >> C;

            switch (C) {
                case 1: {
                    cout << "Enter a number." << endl;
                    float Q;
                    cin >> Q;
                    if (Q < 0)
                        cout << "Numbers less than 0 are not real!" << endl;
                    else
                        cout << sqrt(Q) << endl;
                    break;
                }

                case 2: {
                    float X, Y;
                    cout << "Enter base number." << endl;
                    cin >> X;
                    cout << "Enter exponent number." << endl;
                    cin >> Y;
                    cout << pow(X, Y) << endl;
                    break;
                }

                default:
                    cout << "Invalid option!" << endl;
            }
            break;
        }

        case 3: {
            cout << "Choose an option: 1. Calculate hypotenuse" << endl;
            int S;
            cin >> S;

            switch (S) {
                case 1: {
                    cout << "Enter 2 perpendicular sides." << endl;
                    float W, L;
                    cin >> W >> L;
                    float h = sqrt(L * L + W * W);
                    if (W * W + L * L == h * h)
                        cout << "Result: " << h << endl;
                    else
                        cout << "These numbers do not form a right triangle with a valid hypotenuse." << endl;
                    break;
                }

                default:
                    cout << "Enter a valid option!" << endl;
            }
            break;
        }

        default:
            cout << "Invalid option!" << endl;
    }

    return 0;
}
