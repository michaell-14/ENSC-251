/**
 * @file shipContainer.cpp
 * @author MICHAEL LANGE
 * @Date OCT 10 2024
 * @version 1.0
 * @section DESCRIPTION
 * This program demonstrates the use of polymorphism and inheritance by creating and 
 * managing different types of shipping containers (manual and RFID-based). It 
 * dynamically allocates memory for the shipping container objects, sets their IDs, 
 * manages their manifests, and outputs the details of each container. The program 
 * demonstrates basic OOP principles like inheritance, polymorphism, and dynamic memory 
 * management.
 *
 * The ShippingContainer base class is extended by two derived classes: 
 * ManualShippingContainer and RFIDShippingContainer. Each class has specific 
 * implementations for setting and retrieving shipping container details.
 *
 * The program also ensures proper memory management by deallocating the dynamically 
 * allocated memory at the end.
 */

// Include necessary header files for input/output and string manipulation
#include <iostream>
#include <string>

// Include custom header files for ShippingContainer and its derived classes
#include "shippingContainer.h"
#include "ManualShippingContainer.h"
#include "RFIDShippingContainer.h"

int main() {
    // Create an array of pointers to ShippingContainer objects, allowing for polymorphic behavior
    shippingContainer* container[6];

    // Instantiate three ManualShippingContainer objects and set their IDs and manifests
    ManualShippingContainer* manual1 = new ManualShippingContainer();
    manual1->setID(1001);  // Set the container ID for manual1
    manual1->setManifest("4 crate of apples");  // Set the manifest (items being shipped) 

    ManualShippingContainer* manual2 = new ManualShippingContainer();
    manual2->setID(1002);  // Set the container ID for manual2
    manual2->setManifest("6 crate of orange");  // Set the manifest

    ManualShippingContainer* manual3 = new ManualShippingContainer();
    manual3->setID(1003);  // Set the container ID for manual3
    manual3->setManifest("4 crate of pears");  // Set the manifest

    // Instantiate three RFIDShippingContainer objects and add items to their manifests
    RFIDShippingContainer* rfid1 = new RFIDShippingContainer();
    rfid1->setID(2001);  // Set the container ID for rfid1
    rfid1->addItem("apples");  // Add an item to the RFID-based container
    rfid1->addItem("bananas");  // Add another item

    RFIDShippingContainer* rfid2 = new RFIDShippingContainer();
    rfid2->setID(2002);  // Set the container ID for rfid2
    rfid2->addItem("oranges");  // Add an item to the RFID-based container
    rfid2->addItem("grapes");  // Add another item

    RFIDShippingContainer* rfid3 = new RFIDShippingContainer();
    rfid3->setID(2003);  // Set the container ID for rfid3
    rfid3->addItem("pears");  // Add an item to the RFID-based container
    rfid3->addItem("pears");  // Add another item (duplicate)

    // Assign the created objects (both manual and RFID) to the container array
    container[0] = manual1;
    container[1] = manual2;
    container[2] = manual3;
    container[3] = rfid1;
    container[4] = rfid2;
    container[5] = rfid3;

    // Iterate through the container array and output the ID and manifest of each container
    for (int i = 0; i < 6; ++i) {
        std::cout << "\nContainer ID: " << container[i]->getID() << std::endl;
        std::cout << container[i]->getManifest() << std::endl;  // Output the manifest (contents)
    }

    // Properly deallocate the dynamically allocated memory to prevent memory leaks
    for (int i = 0; i < 6; ++i) {
        delete container[i];  // Delete each object pointed to by the array
    }

    return 0;  // Return 0 to indicate successful program termination
}
