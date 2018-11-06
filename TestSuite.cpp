#include "LinkedListOfInts.h"
#include <iostream>
#include <stdexcept>
#include "TestSuite.h"
#include <stdlib.h>



TestSuite::TestSuite(){

  srand(1298); // initialize random with seed

}



void TestSuite::test(bool condition){
  if(condition){
    std::cout << "PASSED\n";
    battery_passes++;
  }
  else{
    std::cout << "FAILED\n";
  }
}



void TestSuite::testExcept(std::exception e){
  std::cout << "FAILED (exception: ";
  std::cout << e.what();
  std::cout << ")\n";
}



void TestSuite::allTests(){

  battery_passes = 0;
  random_passes = 200;

  std::cout << "Beginning Test Suite...\n";

  // testConstructor();
  // testDestructor();
  // testIsEmpty();
  // testSize();
  // testAddBack();
  // testAddFront();
  // testRemoveBack();
  // testRemoveFront();
  // testSearch();
  // testRandom();

  std::cout << "Test Suite Complete.\n";
  std::cout << "Test Battery: " + std::to_string(battery_passes) + "/32 PASSED\n";
  std::cout << "Test RANDOM: " + std::to_string(random_passes) + "/200 PASSED\n";
}



void TestSuite::testConstructor(){
  std::cout << "Test 1: Empty list has size 0:\t\t\t\t\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    test(list.toVector().empty());
  }
  catch(std::exception e){
    testExcept(e);
  }
}



void TestSuite::testDestructor(){

}



void TestSuite::testIsEmpty(){
  std::cout << "Test 3: isEmpty returns true for new list:\t\t\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    test(list.isEmpty());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 4: isEmpty returns false for list with one element:\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;
    list.addFront(5);

    test(!list.isEmpty());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 5: isEmpty returns false for list with many elements (10):\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i);
    }

    test(!list.isEmpty());
  }
  catch(std::exception e){
    testExcept(e);
  }

}



void TestSuite::testSize(){

  std::cout << "Test 6: size() returns 0 for an empty list:\t\t\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    test(list.toVector().empty());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 7: size() returns 1 for a list with a single element:\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addFront(2);

    test(list.size() == 1);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 8: size() returns the correct number for list with many elements (10):\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    for(int i = 0; i < 10; i++){
      list.addFront(i);
    }

    test(list.size() == 10);
  }
  catch(std::exception e){
    testExcept(e);
  }

}



void TestSuite::testSearch(){

  std::cout << "Test 27: search on an empty list returns false:\t\t\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    test(!list.search(4));
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 28: search on a list of length 1 returns false if the search element is not present:\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addFront(5);

    test(!list.search(4));
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 29: search on a list of length 1 returns true if the search element is present:\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addFront(49);

    test(list.search(49));
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 30: search on a list of length 10 returns false if the search element is not present:\t\t\t\t\t";
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


  std::cout << "Test 31: search on a list of length 10 returns true if the search element is present once:\t\t\t\t\t";
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


  std::cout << "Test 32: search on a list of length 10 returns true if the search element is present multiple times:\t\t\t\t";
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

  std::cout << "Test 9: addBack() on an empty list produces a list of length 1:\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addBack(59);

    test(list.toVector().size() == 1);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 10: addBack() on an empty list produces list with first element == inserted value:\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addBack(145);

    test(list.toVector()[0] == 145);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 11: addBack() on a list with 1 element produces list of length 2:\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addBack(13);
    list.addBack(46);

    test(list.toVector().size() == 2);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 12: addBack() on a list with 1 element produces list with second element == inserted value:\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addBack(4);
    list.addBack(78);

    test(list.toVector()[1] == 78);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 13: addBack() on a list with many elements (10) produces list with one additional element (11):\t\t\t\t";
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


  std::cout << "Test 14: addBack() on a list with many element produces list with last element == inserted value:\t\t\t\t";
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

  std::cout << "Test 15: addFront() on an empty list produces a list of length 1:\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addFront(59);

    test(list.toVector().size() == 1);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 16: addFront() on an empty list produces list with first element == inserted value:\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addFront(145);

    test(list.toVector()[0] == 145);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 17: addFront() on a list with 1 element produces list of length 2:\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addFront(13);
    list.addFront(46);

    test(list.toVector().size() == 2);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 18: addFront() on a list with 1 element produces list with first element == inserted value:\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addFront(4);
    list.addFront(78);

    test(list.toVector()[0] == 78);
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 19: addFront() on a list with many elements (10) produces list with one additional element (11)\t\t\t\t";
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


  std::cout << "Test 20: addBack() on a list with many element produces list with first element == inserted value:\t\t\t\t";
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

  std::cout << "Test 21: removeBack() on an empty list returns false:\t\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    test(!list.removeBack());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 22: removeBack() on an empty list does not modify the list:\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.removeBack();

    test(list.toVector().empty());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 23: removeBack() on a list with one element returns true:\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addFront(1);

    test(list.removeBack());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 24: removeBack() on a list with one element results in an empty list:\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addFront(10);

    list.removeBack();

    test(list.toVector().empty());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 25: removeBack() on a list with many elements (10) returns true:\t\t\t\t\t\t\t\t";
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


  std::cout << "Test 26: removeBack() on a list with many elements (10) results in the same list, missing the last element of the original:\t";
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

  std::cout << "Test 21: removeFront() on an empty list returns false:\t\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    test(!list.removeFront());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 22: removeFront() on an empty list does not modify the list:\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.removeFront();

    test(list.toVector().empty());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 23: removeFront() on a list with one element returns true:\t\t\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addFront(1);

    test(list.removeFront());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 24: removeFront() on a list with one element results in an empty list:\t\t\t\t\t\t\t";
  try{
    LinkedListOfInts list;

    list.addFront(10);

    list.removeFront();

    test(list.toVector().empty());
  }
  catch(std::exception e){
    testExcept(e);
  }


  std::cout << "Test 25: removeFront() on a list with many elements (10) returns true:\t\t\t\t\t\t\t\t";
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


  std::cout << "Test 26: removeFront() on a list with many elements (10) results in the same list, missing the first element of the original:\t";
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



void TestSuite::testRandom(){

  std::cout << "\nRunning RANDOM test.\n";
  std::vector<int> sim;
  LinkedListOfInts list;
  std::vector<int> contents;
  bool error = false;

  for(int i = 0; i < 50; i++){
    std::cout << "Operation: ";
    int val = rand() % 1000;
    int op = rand() % 4;
    switch(op){
      case 0:  list.addFront(val);
               sim.insert(sim.begin(), val);
               std::cout << "addFront\n";
               break;
      case 1:  list.addBack(val);
               sim.push_back(val);
               std::cout << "addBack\n";
               break;
      case 2:  list.removeFront();
               if(!sim.empty()){
                 sim.erase(sim.begin());
               }
               std::cout << "removeFront\n";
               break;
      default: list.removeBack();
               if(!sim.empty()){
                 sim.pop_back();
               }
               std::cout << "removeBack\n";
               break;
    }

    contents = list.toVector();
    std::cout << "\texpected: ";
    printVector(sim);
    std::cout << "\n\tactual: ";
    printVector(contents);
    std::cout << "\n";

    error = false;

    if(contents != sim){
      std::cout << "\tFAILED: list does not have the expected contents.\n";
      random_passes--;
      error = true;
    }
    if(list.size() != (int)contents.size()){
      std::cout << "\tFAILED: size method gave wrong value (" + std::to_string(list.size()) + ", expected " + std::to_string(contents.size()) + ")\n";
      random_passes--;
      error = true;
    }
    if(contents.size() != sim.size()){
      std::cout << "\tFAILED: list incorrect length (" + std::to_string(contents.size()) + ", expected " + std::to_string(sim.size()) + ")\n";
      random_passes--;
      error = true;
    }
    if(contents.empty() != list.isEmpty()){
      std::cout << "\tFAILED: list incorrectly reported empty status\n";
      random_passes--;
      error = true;
    }

    if(error){
      sim = contents;
    }
  }


}



void TestSuite::printVector(std::vector<int> v){
  std::cout << "<";
  for(int i = 0; i < (int)v.size(); i++){
    std::cout << v[i];
    if(i != ((int)v.size())-1){
      std::cout << ", ";
    }
  }
  std::cout << ">";
}
