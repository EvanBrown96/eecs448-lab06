#include "LinkedListOfInts.h"
#include <stdexcept>

class TestSuite {

public:

  TestSuite();

  // run all of the tests for LinkedListOfInts
  void allTests();

  // test that the constructor creates an empty list
  void testConstructor();

  // test that the destructor deletes all the nodes in the list
  void testDestructor();

  // 1. test if a newly created list is empty
  // 2. test if a list with one item added to it is empty
  // 3. test if a list with many elements in it is not empty [use n=10]
  void testIsEmpty();

  // 1. test that the size method returns 0 for an empty list
  // 2. test that the size method returns 1 for a list with a single element
  // 3. test that the size method returns n for a list with n elements [use n=10]
  void testSize();

  // 1. test that searching in an empty list returns false
  // 2. test that searching in a list of length 1 returns false if the search value is not present
  // 3. test that searching in a list of length 1 returns true if the search value is present
  // 4. test that searching in a list of length n [use n=10] returns false if the search value is not present
  // 5. test that searching in a list of length n [use n=10] returns true if the search value is present
  // 6. test that searching in a list of length n [use n=10] returns true if the search value is present multiple times
  void testSearch();

  // 1. test that addBack(x) on an empty list contains a single element of value x
  // 2. test that addBack(x) on a list with 1 element produces a list where the 2nd element is x
  // 3. test that addBack(x) on a list with an arbitary n elements produces a list where the last element is x [use n=10]
  void testAddBack();

  // 1. test that addFront(x) on an empty list contains a single element of value x
  // 2. test that addFront(x) on a list with 1 element produces a list where the first element is x
  // 3. test that addFront(x) on a list with an arbitrary n elements produces a list where the first element is x [use n=10]
  void testAddFront();

  // 1. test that removeBack() on an empty list returns false and the list is not modified
  // 2. test that removeBack() on a list with one element returns true and produces an empty list
  // 3. test that removeBack() on a list with an arbitrary n elements returns true and produces the same list without the last element [use n=10]
  void testRemoveBack();

  // 1. test that removeFront() on an empty list returns false and the list is not modified
  // 2. test that removeFront() on a list with one element returns true and produces an empty list
  // 3. test that removeFront() on a list with an arbitrary n elements returns true and produces the same list without the first element [use n=10]
  void testRemoveFront();

  // does 50 random operations to a linked list while simulating on a vector.
  // checks the contents, size, and isEmpty of the list after each operation and verifies its correctness.
  void testRandom();

private:

  // prints out "PASSED" or "FAILED" based on input condition
  void test(bool condition);

  // prints out the exception encountered during a test
  void testExcept(std::exception e);

  // prints out a vector
  void printVector(std::vector<int> v);

  int battery_passes = 0;
  int random_passes = 200;

};
