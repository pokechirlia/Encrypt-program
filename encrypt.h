#include <string>
class Classical;

class Classical
{
public:
    Classical();
    void shiftCipher();
    void shiftEncrypt();
};

void print_message(std::string file);
void classical_crypt();
bool isNumber(const std::string &s);
