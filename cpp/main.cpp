#include <iostream>
#include "aphw4.h"
#include "gtest/gtest.h"
#include "human.h"
#include "child.h"
#include "adult.h"
int main(int argc, char **argv)
{

    ::testing::InitGoogleTest(&argc, argv);
    std::cout << "In the name of God" << std::endl;
    std::cout << "RUNNING TESTS ..." << std::endl;
    int ret{RUN_ALL_TESTS()};
    if (!ret)
        std::cout << "SUCCESS" << std::endl;
    else
        std::cout << "FAILED" << std::endl;
    return 0;
}
