#include <iostream>
#include <memory>

std::unique_ptr<int> uniquePtr = std::make_unique<int>(42);  // Creating a unique pointer

std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(41);  // Creating shared pointers
std::shared_ptr<int> sharedPtr2 = sharedPtr1;

std::shared_ptr<int> sharedPtr = std::make_shared<int>(40);  // Creating a shared pointer
std::weak_ptr<int> weakPtr = sharedPtr;                      // Creating a weak pointer

struct MyResource {
    void operator() (int* ptr) const {
        delete[] ptr;
    }
};

int main()
{
    // Accessing the value
    if (uniquePtr) 
    {
        std::cout << "Value: " << *uniquePtr << std::endl;
    }

    // Accessing the value
    if (sharedPtr1) 
    {
        std::cout << "Value: " << *sharedPtr1 << std::endl;
    }

    if (auto lockedSharedPtr = weakPtr.lock()) 
    {
        std::cout << "Value: " << *lockedSharedPtr << std::endl;
    } 
    else 
    {
        std::cout << "Resource is no longer available." << std::endl;
    }

    std::unique_ptr<int[], MyResource> customPtr(new int[5]);  // Using a custom deleter
    // No need to manually call delete[], the custom deleter handles it automatically

    // Using std::make_shared
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(42);

    // Using std::make_unique
    std::unique_ptr<int> uniquePtr = std::make_unique<int>(42);

    return 0;
}
