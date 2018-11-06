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
  // 3. test if a list with a number of additions is not empty [use n=10]
  void testIsEmpty();

  // 1. test that the size method returns 0 for a newly created list
  // 2. test that the size method returns 1 for a list with a single addition
  // 3. test that the size method returns n for a list with n additions [use n=10]
  // 4. test that the size method returns n-m for a list with n additions and m removals in an arbitrary order (where a removal is not done on an empty list) [use AAAARRARAARRRAAAR]
  void testSize();

  // 1. test that searching for an arbitrary element in an empty list returns false
  // 2. test that searching for an
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

};
