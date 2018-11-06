#include "LinkedListOfInts.h"
#include <iostream>
#include <stdexcept>
#include "TestSuite.h"



TestSuite::TestSuite(){}



void TestSuite::allTests(){
  std::cout << "Beginning Test Suite...\n";
  std::cout << "Test Suite Complete.";
}

#include "LinkedListOfInts.h"
#include <iostream>
#include "TestSuite.h"



TestSuite::TestSuite(){}



void TestSuite::test(bool condition){
  if(condition){
    std::cout << "PASSED\n";
  }
  else{
    std::cout << "FAILED\n";
  }
}



void TestSuite::testExcept(std::exception e){
  std::cout << "FAILED (exception: " + e.what() + ")\n";
}



void TestSuite::allTests(){
  std::cout << "Beginning Test Suite...\n";



  std::cout << "Test Suite Complete.";
}



void TestSuite::testConstructor(){
  std::cout << "Test 1: Empty list has size 0: ";
  try{
    LinkedListOfInts list;

    test(list.toVector().size() == 0);
  }
  catch(std::exception e){
    testExcept(e);
  }
}



void TestSuite::testDestructor(){

}



void TestSuite::testIsEmpty(){
  std::cout << "Test 3: isEmpty returns true for new list: ";
  try{
    LinkedListOfInts list;

    test(LinkedList.isEmpty());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 4: isEmpty returns false for list with one element: ";
  try{
    LinkedListOfInts list;
    list.addFront(5);

    test(!LinkedList.isEmpty());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 5: isEmpty returns false for list with many elements (10): ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i);
    }

    test(!LinkedList.isEmpty());
  }
  catch(std::exception e){
    testExcept(e);
  }

}



void TestSuite::testSize(){

  std::cout << "Test 6: size() returns 0 for an empty list: ";
  try{
    LinkedListOfInts list;

    test(LinkedList.size() == 0);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 7: size() returns 1 for a list with a single element: ";
  try{
    LinkedListOfInts list;

    list.addFront(2);

    test(LinkedList.size() == 1);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 8: size() returns the correct number for list with many elements (10): ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i);
    }

    test(LinkedList.size() == 10);
  }
  catch(std::exception e){
    testExcept(e);
  }

}



void TestSuite::testSearch(){

  std::cout << "Test 27: search on an empty list returns false: ";
  try{
    LinkedListOfInts list;

    test(!list.search(4));
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 28: search on a list of length 1 returns false if the search element is not present: ";
  try{
    LinkedListOfInts list;

    list.addFront(5);

    test(!list.search(4));
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 29: search on a list of length 1 returns true if the search element is present: ";
  try{
    LinkedListOfInts list;

    list.addFront(49);

    test(list.search(49));
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 30: search on a list of length 10 returns false if the search element is not present: ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i*2+3);
    }

    test(!list.search(6));
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 31: search on a list of length 10 returns true if the search element is present once: ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i*2+3);
    }

    test(list.search(5));
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 32: search on a list of length 10 returns true if the search element is present multiple times: ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i);
      list.addFront(i);
    }

    test(list.search(7));
  }
  catch(std::exception e){
    testExcept(e);
  }
}



void TestSuite::testAddBack(){

  std::cout << "Test 9: addBack() on an empty list produces a list of length 1: ";
  try{
    LinkedListOfInts list;

    list.addBack(59);

    test(list.toVector().size() == 1);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 10: addBack() on an empty list produces list with first element == inserted value: ";
  try{
    LinkedListOfInts list;

    list.addBack(145);

    test(list.toVector()[0] == 145);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 11: addBack() on a list with 1 element produces list of length 2: ";
  try{
    LinkedListOfInts list;

    list.addBack(13);
    list.addBack(46);

    test(list.toVector().size() == 2);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 12: addBack() on a list with 1 element produces list with second element == inserted value: ";
  try{
    LinkedListOfInts list;

    list.addBack(4);
    list.addBack(78);

    test(list.toVector()[1] == 78);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 13: addBack() on a list with many elements (10) produces list with one additional element (11) ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 11; i++){
      list.addBack(i);
    }

    test(list.toVector().size() == 11);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 14: addBack() on a list with many element produces list with last element == inserted value: ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 11; i++){
      list.addBack(i);
    }

    test(list.toVector()[10] == 10);
  }
  catch(std::exception e){
    testExcept(e);
  }

}



void TestSuite::testAddFront(){

  std::cout << "Test 15: addFront() on an empty list produces a list of length 1: ";
  try{
    LinkedListOfInts list;

    list.addFront(59);

    test(list.toVector().size() == 1);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 16: addFront() on an empty list produces list with first element == inserted value: ";
  try{
    LinkedListOfInts list;

    list.addFront(145);

    test(list.toVector()[0] == 145);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 17: addFront() on a list with 1 element produces list of length 2: ";
  try{
    LinkedListOfInts list;

    list.addFront(13);
    list.addFront(46);

    test(list.toVector().size() == 2);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 18: addFront() on a list with 1 element produces list with first element == inserted value: ";
  try{
    LinkedListOfInts list;

    list.addFront(4);
    list.addFront(78);

    test(list.toVector()[0] == 78);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 19: addFront() on a list with many elements (10) produces list with one additional element (11) ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 11; i++){
      list.addFront(i);
    }

    test(list.toVector().size() == 11);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 20: addBack() on a list with many element produces list with first element == inserted value: ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 11; i++){
      list.addFront(i);
    }

    test(list.toVector()[0] == 10);
  }
  catch(std::exception e){
    testExcept(e);
  }

}



void TestSuite::testRemoveBack(){

  std::cout << "Test 21: removeBack() on an empty list returns false: ";
  try{
    LinkedListOfInts list;

    test(!list.removeBack());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 22: removeBack() on an empty list does not modify the list: ";
  try{
    LinkedListOfInts list;

    list.removeBack();

    test(list.toVector().size() == 0);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 23: removeBack() on a list with one element returns true: ";
  try{
    LinkedListOfInts list;

    list.addFront(1);

    test(list.removeBack());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 24: removeBack() on a list with one element results in an empty list: ";
  try{
    LinkedListOfInts list;

    list.addFront(10);

    list.removeBack();

    test(list.toVector().size() == 0);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 25: removeBack() on a list with many elements (10) returns true: ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i);
    }

    test(list.removeBack());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 26: removeBack() on a list with many elements (10) results in the same list, missing the last element of the original: ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i);
    }

    list.removeBack();

    bool condition = true;
    std::vector<int> contents = list.toVector();

    for(int i = 0; i < 9; i++){
      condition = condition and (contents[i] == i);
    }

    test(condition);
  }
  catch(std::exception e){
    testExcept(e);
  }

}



void TestSuite::testRemoveFront(){

  std::cout << "Test 21: removeFront() on an empty list returns false: ";
  try{
    LinkedListOfInts list;

    test(!list.removeFront());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 22: removeFront() on an empty list does not modify the list: ";
  try{
    LinkedListOfInts list;

    list.removeFront();

    test(list.toVector().size() == 0);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 23: removeFront() on a list with one element returns true: ";
  try{
    LinkedListOfInts list;

    list.addFront(1);

    test(list.removeFront());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 24: removeFront() on a list with one element results in an empty list: ";
  try{
    LinkedListOfInts list;

    list.addFront(10);

    list.removeFront();

    test(list.toVector().size() == 0);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 25: removeFront() on a list with many elements (10) returns true: ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i);
    }

    test(list.removeFront());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 26: removeFront() on a list with many elements (10) results in the same list, missing the first element of the original: ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i);
    }

    list.removeFront();

    bool condition = true;
    std::vector<int> contents = list.toVector();

    for(int i = 0; i < 9; i++){
      condition = condition and (contents[i] == i+1);
    }

    test(condition);
  }
  catch(std::exception e){
    testExcept(e);
  }

}


void TestSuite::testConstructor(){
  std::cout << "Test 1: Empty list has size 0: ";
  try{
    LinkedListOfInts list;
    std::vector<int> contents = list.toVector();

    if(contents.size() == 0){
      std::cout << "PASSED\n";
    }
    else{
      std::cout << "FAILED\n";
    }
  }
  catch(std::exception e){
    std::cout << "FAILED (exception: " + e.what() + ")\n";
  }
}



void TestSuite::testDestructor(){

}



void TestSuite::testIsEmpty(){
  std::cout << "Test 3: isEmpty returns true for new list: ";
  try{
    LinkedListOfInts list;

    if(LinkedList.isEmpty()){
      std::cout << "PASSED\n";
    }
    else{
      std::cout << "FAILED\n";
    }
  }
  catch(std::exception e){
    std::cout << "FAILED (exception: " + e.what() + ")\n";
  }


  std::cout << "Test 4: isEmpty returns false for list with one element: ";
  try{
    LinkedListOfInts list;
    list.addFront(5);

    if(!LinkedList.isEmpty()){
      std::cout << "PASSED\n";
    }
    else{
      std::cout << "FAILED\n";
    }
  }
  catch(std::exception e){
    std::cout << "FAILED (exception: " + e.what() + ")\n";
  }


  std::cout << "Test 5: isEmpty returns false for list with many elements (10): ";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i);
    }

    if(!LinkedList.isEmpty()){
      std::cout << "PASSED\n";
    }
    else{
      std::cout << "FAILED\n";
    }
  }
  catch(std::exception e){
    std::cout << "FAILED (exception: " + e.what() + ")\n";
  }

}



void TestSuite::testSize(){

}



void TestSuite::testSearch(){

}



void TestSuite::testAddBack(){

}



void TestSuite::testAddFront(){

}



void TestSuite::testRemoveBack(){

}



void TestSuite::testRemoveFront(){

}
