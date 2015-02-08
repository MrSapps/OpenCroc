#include <gmock/gmock.h>

TEST(Placeholder, test)
{
    ASSERT_EQ(0, 0);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}

