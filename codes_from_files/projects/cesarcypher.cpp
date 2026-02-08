#include <iostream>
#include <string>
using namespace std;

// cipher class does the shifting
class CaesarCipher {
private:
    int shift_num;
    
    // shifts a single char
    char shift_letter(char letter, int shift_by) {
        // uppercase
        if (letter >= 'A' && letter <= 'Z') {
            int alphabet_position = letter - 'A';
            alphabet_position = (alphabet_position + shift_by) % 26;
            if (alphabet_position < 0) alphabet_position = alphabet_position + 26;  // fixing negative 
            //convert back to letter 
            return 'A' + alphabet_position;
        }
        // lowercase
        else if (letter >= 'a' && letter <= 'z') {
            int alphabet_position = letter - 'a';
            alphabet_position = (alphabet_position + shift_by) % 26;
            if (alphabet_position < 0) alphabet_position = alphabet_position + 26;
            //back to letter
            return 'a' + alphabet_position;
        }
        else {
            return letter;
        }
    }
    
public:
    CaesarCipher(int shift_val) {
        shift_num = shift_val;
    }
    
    // function to encode the text
    string encode(string input_str) {
        string output_str = "";
        for (int i = 0; i < input_str.length(); i++) {
            output_str = output_str + shift_letter(input_str[i], shift_num);
        }
        return output_str;
    }
};

int main() {
    int n;
    string user_text;
    
    // get shift amount from user
    cout << "Enter the number to shift the letters by (N): ";
    cin >> n;
    cin.ignore();
    
    // get text to encode
    cout << "Enter string to encode with caesar cipher N=" << n << " -> ";
    getline(cin, user_text);
    
    CaesarCipher cipher(n);
    
    string encoded_text = cipher.encode(user_text);
    
    cout << "Result after shifting = " << encoded_text << endl;
    
    return 0;
}