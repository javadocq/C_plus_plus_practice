#include <iostream>

using namespace std;

void double_data(int* int_ptr) {
    *int_ptr *= 2;
}

int* create_array(int size, int init_value = 0) {
    int* new_storage = nullptr;
    new_storage = new int[size];

    for (int i = 0; i < size; i++) {
        *(new_storage + i) = init_value;
    }

    return new_storage;

}

int main() {
    int value = 10;

    cout << value << endl;

    double_data(&value);

    cout << value << endl;

    int* my_array = nullptr;

    my_array = create_array(100, 10);

    for(int i = 0; i < 10; i++) {
        cout << (my_array + i) << endl;
    }

    delete my_array;

    return 0;
}