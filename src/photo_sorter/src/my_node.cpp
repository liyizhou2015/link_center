#include "rclcpp/rclcpp.hpp"

class MyNode : public rclcpp::Node
{
public:
    MyNode() : Node("my_node")
    {
        int a = 44;
        int b = 2;
        char buffer[50];
        sprintf(buffer, "%d", b*a); 
        RCLCPP_INFO(this->get_logger(),"This is a number: %s", buffer);
        // adsf sa fsdf
    }

};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MyNode>());
    rclcpp::shutdown();
    return 0;
}