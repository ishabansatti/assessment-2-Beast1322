[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/QnR0isw-)
# Lab Assessment 2

![Language](https://img.shields.io/badge/language-C%2B%2B-blue.svg)
![course](https://img.shields.io/badge/course-AI134L-brightgreen.svg)
![Compiler](https://img.shields.io/badge/compiler-cpp.sh-orange.svg)

> Object oriented programming lab assessment covering classes, static members, structs, and object merging through real-world cloud computing scenarios.

---

## Table of Contents

- [Overview](#overview)
- [Getting Started](#getting-started)
- [Question 1: Cloud Discount System](#question-1-cloud-discount-system)
- [Question 2: Cloud Billing Invoice System](#question-2-cloud-billing-invoice-system)
- [How to Run](#how-to-run)
- [Author](#author)

---

## Overview

This repository contains **Lab Assessment 2**, which consists of two C++ programming problems designed to demonstrate proficiency in:

- Class design
- Static data members and member functions
- Struct composition within classes
- Constructor initialization
- Object interaction and data merging

All solutions must be written in **C++** and can be compiled and executed on [cpp.sh](https://cpp.sh/).

---

## Getting Started

### Prerequisites

- Access to an online compiler such as [cpp.sh](https://cpp.sh/)

---

## Question 1: Cloud Discount System

### Problem Statement

**Beta Analytics** is offering a _New Subscriber Discount_ to customers who purchase its SaaS platform through specific cloud provider marketplaces. However, this discount is limited to the first **100 valid customers only**. Once 100 customers have availed the discount, it will no longer be available regardless of the marketplace used.

### Discount Data

| Cloud Marketplace        | ID (First 2 Digits) | Discount |
| ------------------------ | :-----------------: | :------: |
| AWS Marketplace          |         44          |   20%    |
| Azure Marketplace        |         60          |   15%    |
| GCP Marketplace          |         53          |   10%    |
| Oracle Cloud Marketplace |         41          |    5%    |

### Requirements

**a)** Write a C++ class `CloudDiscount` that:

1. Takes a 4-digit marketplace subscription ID as `int` in its constructor.
2. Has a **static data member** to track the total number of customers who have availed the discount.
3. Has a member function `checkDiscount()` that:
   - Extracts the first two digits of the subscription ID.
   - Matches the Marketplace ID.
   - Displays the applicable discount if the customer count has not reached 100.
     - _Example:_ `"Congratulations, You have availed 20% discount."`
   - If the limit is reached, displays: `"Sorry, discount offer has ended."`

**b)** In the `main()` function, create two objects:

1. **GCP Marketplace** — subscription ID starting with `53` (e.g., `5321`).
2. **AWS Marketplace** — subscription ID starting with `44` (e.g., `4490`).

**c)** Display the total number of customers who have availed the discount.

---

## Question 2: Cloud Billing Invoice System

### Problem Statement

A cloud billing system organizes a company's monthly charges by service category. Each category (such as **compute** and **storage**) is stored in a separate object. At the end of the billing cycle, the system automatically merges all service charges into one final invoice.

### Requirements

**a)** Write a `struct CloudService` with the following members:

- `int Resources`
- `float totalCost`

**b)** Write a class `Invoice` that:

1. Has a data member of type `CloudService`.
2. Has a constructor to initialize it.
3. Has a function `addInvoices()` to merge two `Invoice` objects by adding their resources and costs.
4. Has a `display()` function to print the final invoice.

**c)** In the `main()` function:

1. Create one `Invoice` object for **compute services** (6 resources, Rs. 3,200).
2. Create one `Invoice` object for **storage services** (3 resources, Rs. 18,500).
3. Merge the objects using the `addInvoices()` function.

**d)** Display the final merged invoice in the following format:

```
Total number of resources is: ...
Total bill: ...
```

---

## How to Run

### Online Compiler

1. You can code in [cpp.sh](https://cpp.sh/).
2. Click **Run** to execute.

### Code Submission

1. Paste and commit code for question 1 in beta_analytics.cpp.
2. Paste and commit code for question 2 in cloud_billing.cpp.

---

## Repository Structure

```
lab-assessment-2/
├── beta_analytics.cpp     # Cloud Discount System
├── cloud_billing.cpp      # Cloud Billing Invoice System
└── README.md              # Project documentation
```

---

## Author

**Shaban Satti**
Email: [ishabansatti@gmail.com](mailto:ishabansatti@gmail.com)

---
