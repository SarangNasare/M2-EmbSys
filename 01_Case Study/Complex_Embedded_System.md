# Vending Machine

## Introduction
   The project is vending machine which allows people to get the items you want without any human help.


## Requirments
### High level Requirements
   | --ID | High level Requirements |
   |:----------:|:--------------------:| 
   | HLR1 | Take money form coustmer. |
   | HLR2 | Take the code of an item from the user. |
   | HLR3 | Give correct item and spare change to the coustmer |

### Low level Requirements
   | --ID | Low level Requirements |
   |:----------:|:--------------------:| 
   | LLR1 | It shall Count and Verify money taken from coustmer. |
   | LLR2 | It shall Cheak and verify the code entered the user is correct or not. |
   | LLR3 | It shall Run the proper program as per user code input. |
   | LLR4 | It shall calculate the cost of the item and give the spare change back to coustmer if there is any. |


## Block Diagram
![image](https://user-images.githubusercontent.com/98864424/154816160-7ace07f4-5b51-435c-b6a9-c77004530d59.png)


## Components
### Processor
 Performs all the important operations cheaks which programs human has entered and gives signals to other components accordingly. 

### Memory
 Stores all the programs for the different recipes.

### Money Saperator and counter
 Saperate and count the money and send signal to processor. 
        
### Buttons to choose the program
 Using different buttons the user selects the item which he/she whats to make.

### Display
 This shows the Programs which human has selected.

### Item Output
 It is the output for item will come out which coustmer wanted.

### Power Supply
 It is the main component of the whole system. It suppy power to all the components in the system.


