#include <iostream>

int getDigit(const int number);
int sumSingleDigits(const std::string cardNumber);
int sumDoubleDigits(const std::string cardNumber);

int main(){
  
  std::string cardNumber;
  int result = 0;

  std::cout << "Enter a credit card #: ";
  std::cin >> cardNumber;

  result = sumDoubleDigits(cardNumber) + sumSingleDigits(cardNumber);

  if (result % 10 == 0)
  {
    std::cout << cardNumber << " is valid";
  }
  else{
    std::cout << cardNumber << " is not valid";
  }
  
  
  return 0;
}

int getDigit(const int number){
  return number %10 + (number / 10 % 10);
}
int sumSingleDigits(const std::string cardNumber){
  
  int sum = 0;
  for (int i = cardNumber.size() - 1; i >= 0; i-=2){
    sum += cardNumber[i] - '0';
  }
  return sum;
}
int sumDoubleDigits(const std::string cardNumber){

  int sum = 0;
  for (int i = cardNumber.size() - 2; i >= 0; i-=2){
    sum += getDigit((cardNumber[i] - '0') * 2);
  }
  return sum;
}







