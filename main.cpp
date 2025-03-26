#include <iostream>
#include <Eigen/Dense>


int main()
{
    Eigen:: MatrixXd m(2, 5); // Should be size 10

    std::cout << "Before Resize " << m.size() << std::endl;
    
    m.resize(4, 3); // Should be size 12

    std::cout << "After Resize " << m.size() << std::endl;

    return 0;
}