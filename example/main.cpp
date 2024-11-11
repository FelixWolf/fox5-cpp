#include <iostream>
#include <fstream>
#include <vector>
#include "fox5.h"


int main() {
    try {
        
        FOX5File fox5 = FOX5File("iteme.fox");
        //std::cout << "Loaded FOX5 file with magic: " << fox5.footer.magicString << std::endl;
        
        std::ofstream outFile("output.bin", std::ios::binary);
        if (!outFile) {
            std::cerr << "Error: Could not open file for writing!" << std::endl;
            return 1;
        }
        
        FOX5Image test = fox5.getImage(2);
        printf("Width: %i; Height: %i; Mode: %i", test.mWidth, test.mHeight, test.mImageFormat);
        // Write the bytes to the file
        outFile.write(reinterpret_cast<const char*>(test.mData.data()), test.mData.size());

        // Close the file
        outFile.close();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}