#include <iostream>
#include <string>
using namespace std;

// Structure to store weather information for a city
struct WeatherInfo {
    string city;        // Name of the city
    float temperature;  // Temperature in Celsius
    int humidity;       // Humidity in percentage
    float windSpeed;    // Wind speed in kilometers per hour
};

// Function to display the weather information for a selected city
void displayWeather(const WeatherInfo &weather) {
    cout << "-------------------------------------\n";
    cout << "Weather Information for: " << weather.city << endl;
    cout << "Temperature: " << weather.temperature << "°C" << endl;
    cout << "Humidity: " << weather.humidity << "%" << endl;
    cout << "Wind Speed: " << weather.windSpeed << " km/h" << endl;
    cout << "-------------------------------------\n";
}

int main() {
    // Array of predefined weather data for different cities
    WeatherInfo data[] = {
        {"Islamabad", 12.2, 55, 12.0},   // City: Islamabad
        {"Karachi", 24.5, 70, 15.5},     // City: Karachi
        {"Lahore", 13.5, 65, 18.0},      // City: Lahore
        {"Quetta", 18.6, 40, 10.2},      // City: Quetta
        {"Peshawar", 25.7, 60, 14.8}     // City: Peshawar
    };

    int n = sizeof(data) / sizeof(data[0]);  // Calculate the number of cities
    int choice;  // Variable to store the user's choice

    // Loop to display the menu repeatedly until the user exits
    while (true) {
        cout << "\nAvailable Cities:\n";
        
        // Display the list of cities
        for (int i = 0; i < n; i++) {
            cout << i + 1 << ". " << data[i].city << endl;
        }
        
        cout << "0. Exit\n";  // Option to exit the program
        cout << "Select a city (1-" << n << ") or 0 to exit: ";
        cin >> choice;  // Read the user's choice

        if (choice == 0) {  // Exit condition
            cout << "Exiting program. Goodbye!\n";
            break;
        } 
        else if (choice > 0 && choice <= n) {  
            // If the user selects a valid city, display its weather information
            displayWeather(data[choice - 1]);
        } 
        else {
            // If the user enters an invalid choice, display an error message
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}