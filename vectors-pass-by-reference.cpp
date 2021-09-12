#include <iostream>
#include <vector>
// by reference ( ampersand "&" - copy the memory location )
void print_vector(std::vector<int> &data) 
{
    data.push_back(12);
    for(int i = 0; i<data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";

}
int main()
{
    std::vector<int> data = {1,2,3};
    print_vector(data); // referencing the same data object
    print_vector(data); // referencing the same data object
    print_vector(data); // referencing the same data object
    char ch = getchar(); // wait for key
}

/* output:

1       2       3       12                      - added '12'
1       2       3       12      12              - added '12' to the same object
1       2       3       12      12      12      -//--


*/
