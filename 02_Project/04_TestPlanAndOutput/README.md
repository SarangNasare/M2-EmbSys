## High Level Testing
| Test ID | Description of Test case | Input values | Expected Output | Actual Output | Status | Type of test |
|:-----:|:--------------------------:|:--------------:|:-----------------:|:---------------:|:---------:|:-------:|
| H1  | When tank is full| Value from ultasonic sensor | Motor Off | Motor Off |SUCCESS| Manual Test|
| H2  | When tank is empty | Value from ultasonic sensor | Motor ON | Motor ON | SUCCESS | Manual Test|
| H5  | When tank water level is less than 100% | Value from ultasonic sensor | Shown water level with the help of LED's | Shown water level with the help of LED's | SUCCESS | Manual Test|

## Low Level Testing
| Test ID | Description of Test case | Input values | Expected Output | Actual Output | Status | Type of test |
|:-----:|:--------------------------:|:--------------:|:-----------------:|:---------------:|:---------:|:-------:|
| L1  | When tank water level is at 10% | Value from ultasonic sensor | Motor ON | Motor ON |SUCCESS| Manual Test|
| L2  | When tank water level is at 30% | Value from ultasonic sensor | Motor ON | Motor ON | SUCCESS | Manual Test|
| L3  | When tank water level is at 50% | Value from ultasonic sensor | Motor ON | Motor ON | SUCCESS | Manual Test|
| L4  | When tank water level is at 80% | Value from ultasonic sensor | Motor ON | Motor ON |SUCCESS| Manual Test|
| L5  | When tank water level is at 100% | Value from ultasonic sensor | Motor OFF | Motor OFF | SUCCESS | Manual Test|
