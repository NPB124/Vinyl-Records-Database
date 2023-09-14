//
//  Vinyl.hpp
//  Vinyl Record Database
//
//  Created by Nick Brett on 13/09/2023.
//

#ifndef Vinyl_hpp
#define Vinyl_hpp

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>


class Vinyl {
public:
    // Contructor for Vinyl Class
    Vinyl(std::string The_Artist, std::string The_Title, int The_Year)
    {
        Artist = The_Artist;
        Title = The_Title;
        Year = The_Year;
    }
    
    // Destructor for Vinyl Class
    ~Vinyl(){
        
    };
                   // begin public attributes section of class
    std::string Artist;
    std::string Title;
    int Year;
};


#endif /* Vinyl_hpp */
