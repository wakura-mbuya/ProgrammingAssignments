#ifndef MYARRAY_H
#define MYARRAY_H

/**
 * @brief The myArray class represents an array with customizable starting index.
 */
class myArray
{
public:
    /**
     * @brief Default constructor for the myArray class.
     */
    myArray();

    /**
     * @brief Parameterized constructor for the myArray class.
     * @param sz The size of the array.
     * @param start The starting index of the array.
     */
    myArray(int sz, int start);

    /**
     * @brief Destructor for the myArray class.
     */
    ~myArray();

    /**
     * @brief Overloaded bracket operator for accessing array elements.
     * @param index The index of the element to access.
     * @return A reference to the element at the specified index.
     */
    int& operator[](int index);

    /**
     * @brief Overloaded assignment operator for the myArray class.
     * @param other The myArray object to assign from.
     * @return A reference to the assigned myArray object.
     */
    myArray& operator=(const myArray& other);

    /**
     * @brief Overloaded equality operator for the myArray class.
     * @param other The myArray object to compare with.
     * @return True if the myArray objects are equal, false otherwise.
     */
    bool operator==(const myArray& other) const;

    /**
     * @brief Overloaded inequality operator for the myArray class.
     * @param other The myArray object to compare with.
     * @return True if the myArray objects are not equal, false otherwise.
     */
    bool operator!=(const myArray& other) const;

private:
    int* arr;   // Pointer to the array
    int size;   // Size of the array
    int startIdx; // Starting index of the array
};

#endif // MYARRAY_H
