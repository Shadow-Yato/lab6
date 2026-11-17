/*********************************
 * Автор:   Михайлов Даниил      *
 * Задание: Функции              *
 * Вариант: 15                   *
 *********************************/
#include <iostream>

using namespace std;

double findMax(const double values[], int count) {
  double maxValue = values[0];

  for (int elementIndex = 1; elementIndex < count; ++elementIndex) {
    if (values[elementIndex] > maxValue) {
      maxValue = values[elementIndex];
    }
  }

  return maxValue;
}

int main() {
  const int maxArraySize = 100;
  const double maxAbsValue = 1000.0;

  int countA;
  int countB;
  int countC;
  double valuesA[maxArraySize];
  double valuesB[maxArraySize];
  double valuesC[maxArraySize];
  double maxA;
  double maxB;
  double maxC;
  bool isValid;

  cin >> countA >> countB >> countC;

  if (countA < 1 || countA > maxArraySize ||
      countB < 1 || countB > maxArraySize ||
      countC < 1 || countC > maxArraySize) {
    cout << "INVALID\n";
    return 0;
  }

  isValid = true;

  cout << "Enter array A: ";
  for (int elementIndex = 0; elementIndex < countA; ++elementIndex) {
    cin >> valuesA[elementIndex];
    if (valuesA[elementIndex] > maxAbsValue || valuesA[elementIndex] < -maxAbsValue) {
      isValid = false;
    }
  }

  cout << "Enter array B: ";
  for (int elementIndex = 0; elementIndex < countB; ++elementIndex) {
    cin >> valuesB[elementIndex];
    if (valuesB[elementIndex] > maxAbsValue || valuesB[elementIndex] < -maxAbsValue) {
      isValid = false;
    }
  }

  cout << "Enter array C: ";
  for (int elementIndex = 0; elementIndex < countC; ++elementIndex) {
    cin >> valuesC[elementIndex];
    if (valuesC[elementIndex] > maxAbsValue || valuesC[elementIndex] < -maxAbsValue) {
      isValid = false;
    }
  }

  if (!isValid) {
    cout << "INVALID\n";
    return 0;
  }

  maxA = findMax(valuesA, countA);
  maxB = findMax(valuesB, countB);
  maxC = findMax(valuesC, countC);

  cout << "Max A = " << maxA
       << "\nMax B = " << maxB
       << "\nMax C = " << maxC;

  return 0;
}
