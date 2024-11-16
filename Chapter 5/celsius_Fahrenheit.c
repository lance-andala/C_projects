#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float toFahrenheit(float celsius);

int main() {
  // Set a celsius value
  float f_value = 98.8;

  // Call the function with the celsius value
  float result = toFahrenheit(f_value);

  // Print the fahrenheit value
  printf("Celsius: %.2f\n", f_value);

  // Print the result
  printf("Convert Celsius to Fahrenheit: %.2f\n", result);

  return 0;
}


float toFahrenheit(float celsius) {
  //(0°C × 9/5) + 32 = 32°F
  return (celsius * 9/5) + 32.0;
}

/*
// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
  // Set a fahrenheit value
  float f_value = 98.8;

  // Call the function with the fahrenheit value
  float result = toCelsius(f_value);

  // Print the fahrenheit value
  printf("Fahrenheit: %.2f\n", f_value);

  // Print the result
  printf("Convert Fahrenheit to Celsius: %.2f\n", result);

  return 0;
}
*/