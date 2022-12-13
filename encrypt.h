#include <string>
class Classical;

class Classical
{
public:
    Classical();
    void shiftCipher();

private:
    std::string shiftEncrypt(std::string &message, int key);
    std::string shiftDecrypt(std::string &message, int key);
};

void print_message(std::string file);
void classical_crypt();
bool isNumber(const std::string &s);
