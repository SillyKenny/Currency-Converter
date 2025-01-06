#include <iostream>
#include <string>

double convertCurrency(double amount, std::string from, std::string to){
  double rates[] = {1.0, 0.85, 0.80, 1.60}; //USD, EURO, POUND, AUD
  double fromRate = 1.0, toRate = 1.0;

  if (from == "USD") fromRate = rates[0];
  else if (from == "EUR") fromRate = rates[1];
  else if (to == "POUND") toRate = rates[2];
  else if (to == "AUD") toRate = rates[3];
  if (to == "USD") toRate = rates[0];
  else if (to == "EUR") toRate = rates[1];
  else if (to == "POUND") toRate = rates[2];
  else if (to == "AUD") toRate = rates[3];

  return amount * (toRate / fromRate);
}

int main() {
    double amount;
    std::string from, to;
    std::cout << "Enter the amount to convert: ";
    std::cin >> amount;
    std::cout << "Enter the currency to convert from (USD, EUR, POUND, AUD): ";
    std::cin >> from;
    std::cout << "Enter the currency to convert to (USD, EUR, POUND, AUD): ";
    std::cin >> to;

    double convertedAmount = convertCurrency(amount, from, to);
    std::cout << "Converted amount: $" << convertedAmount << std::endl;

    return 0;
}