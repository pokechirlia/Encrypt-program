#include <string>
#include <map>
class Classical;

class Classical
{
public:
    Classical();
    void shiftCipher();
    void substitutionCipher();

private:
    std::string shiftEncrypt(std::string &message, int key);
    std::string shiftDecrypt(std::string &message, int key);
<<<<<<< HEAD
    std::string substitutionEncrypt(std::string &message, std::map<char, char> &keyMap);
    std::string substitutionDecrypt(std::string &message, std::map<char, char> &keyMap);
=======
>>>>>>> parent of a09c954 (set up substitution encrypt)
};

void print_message(std::string file);
void classical_crypt();
bool isNumber(const std::string &s);
