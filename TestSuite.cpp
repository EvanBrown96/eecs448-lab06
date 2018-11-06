#include "LinkedListOfInts.h"
#include <iostream>
#include <stdexcept>
#include "TestSuite.h"



TestSuite::TestSuite(){}



void TestSuite::allTests(){
  std::cout << "Beginning Test Suite...\n";
  std::cout << "Test Suite Complete.";
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
