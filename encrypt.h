#include <string>
#include <map>
#include <algorithm>

class Classical;

class Classical
{
public:
    Classical();
    void shiftCipher();
    void substitutionCipher();
    void transpositionCipher();

private:
    std::string shiftEncrypt(std::string &message, int key);
    std::string shiftDecrypt(std::string &message, int key);
    std::string substitutionEncrypt(std::string &message, std::string &key);
    std::string substitutionDecrypt(std::string &message, std::string &key);
    void convertKeyToOrder(std::string &key);
};

void print_message(std::string file);
void classical_crypt();
bool isNumber(const std::string &s);
