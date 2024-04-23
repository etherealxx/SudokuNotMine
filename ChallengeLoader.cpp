#include "ChallengeLoader.h"

Board ChallengeLoader::readFileToBoard(const std::string& filename){

    Board output;
    std::ifstream file(filename); // Open the file for input

    if (!file.is_open()) { // Check if the file opened successfully
        std::cerr << "Failed to open the file: " << filename << std::endl;
        return {}; // Return an empty vector if failed to open the file
    }
    std::string line;
    // Read the file line by line
    for (int i = 0; i < 9; ++i) {
        if (!std::getline(file, line)) {
            std::cerr << "Failed to read line " << i + 1 << " from file: " << filename << std::endl;
            return {}; // Return an empty vector if failed to read line
        }

        // Check if the line has exactly 9 characters
        if (line.size() != 9) {
            std::cerr << "Invalid line size in the file: " << filename << std::endl;
            return {}; // Return an empty vector if the line size is not 9
        }

        // Push each character into the corresponding row of the grid vector
        for (int j = 0; j < 9; ++j) {
           // std::cout << line[j] << " ";
            output.setValue(i, j, line[j]);

            if (line[j] != '0')
                output.setFixed(i, j, true);
        }
    }

    file.close(); // Close the file

    return output;
}
