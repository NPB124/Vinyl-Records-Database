//
//  main.cpp
//  Vinyl Record Database
//
//  Created by Nick Brett on 13/09/2023.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <fstream>

#include "Vinyl.cpp"


int main() {
    
    /* This program will store the details of the vinyl records that I have.
     using a created Vinyl Class and a simple menu for data input the program
     will store the Artist, record Title, the year in objects
     of the Vinyl class. These details will be printed to a file for storage and
     retrieval purposes */
    
    std::string artist;
    std::string title;
    int year;
    int menu_option = 0;
    
    std::cout << "Hello, Welcome to the Vinyl Database Program: \n\n";
    
    // create a file for storing the records
    
    std::ofstream myfile ("/Users/honeycomb/Desktop/vinyl_records.txt", std::ios::app);
    // Check if the file is open
    if (myfile.is_open()){
        do{
            // Perform these tasks until the user exits the menu
            // Using getline() function to capture whole sentence including white spaces
            std::cout << "Please enter the Name of the Artist? \n";
            std::getline(std::cin, artist);
            std::cout << "\nPlease Enter the Title? \n";
            std::getline(std::cin, title);
            std::cout << "\nPlease enter the Year? \n";
            std::cin >> year;
            
            // Create an object of type Vinyl called New_Record
            // Pass the new data to New_Record
            
            Vinyl New_Record(artist, title, year);
            
            // Write the data to the opened file
 
            myfile << New_Record.Artist << "\n";
            myfile << New_Record.Title << "\n";
            myfile << New_Record.Year << "\n";
            myfile << "\n";
            
            std::cout << "\n Please enter 1 to input details of another vinyl record \n or enter 2 to exit the program\n";
            std::cin >> menu_option;
            // Need to use cin.ignore() to ignore the \n operator which forces the program to skip
            // the user being able to enter the artist name after the first loop
            std::cin.ignore();
           
        }while (menu_option != 2);
        myfile.close();
    }
    else std::cout << "Unable to Open File";
    
    return 0;
}
