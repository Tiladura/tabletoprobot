# tabletoprobot

A personal tabletop robotics project focused on designing, building, and documenting a compact four-legged tabletop robot with servo-driven legs, an ESP32-S3 control system, and an OLED display used as a dynamic face.

## Motivation

I wanted to build a small robot that can fit on a desk, move using simple servo-based legs, and express basic emotions or status through a small display. This project combines mechanical design, electronics, embedded programming, power wiring, and basic robot motion control into one compact engineering build.

The goal of tabletoprobot is to create a small interactive robot platform that can be improved over time with better walking patterns, Bluetooth control, sensors, animations, and more stable mechanical movement.

## Project Overview

tabletoprobot is designed as a compact desktop robot platform that includes:

- 3D-printed body
- four servo-driven legs
- ESP32-S3 development board
- OLED display used as a dynamic face
- protoboard-based electronics layout
- voltage regulation module
- capacitor for reducing servo-related voltage dips
- Li-Po battery for low-current electronics and testing

The robot is intended to test compact mechanical design, servo coordination, onboard electronics layout, and expressive visual feedback.

## Main Features

## Four-Servo Leg System

The robot uses four MG996R servos to move its legs. Two servos are mounted toward the front and two servos are mounted toward the back of the body.

The basic movement system is designed so the front and rear servos can move in opposite directions. This allows the robot to produce a simple walking or crawling motion pattern.

## ESP32-S3 Control System

The ESP32-S3 Dual Type-C Development Board is used as the main controller. It will control the servos, drive the OLED display, and support future Bluetooth-based control.

The ESP32-S3 was chosen because it is compact, programmable through USB-C, and suitable for small robotics projects.

## Protoboard Electronics Layout

The protoboard will be used to connect and organize the robot’s electronic components. It will provide a stable base for wiring the OLED display, ESP32-S3 board, servo signal wires, power rails, and other modules during development and testing.

## Power Regulation

The LM2596 step-down converter module is used to regulate voltage for the robot’s power system. It allows a higher input voltage to be stepped down to a safer voltage for the electronics or servo power rail.

The servos should not be powered directly from the ESP32-S3 board. Servo power should use a separate power rail, and the ESP32-S3 ground must be connected to the servo power ground.

## Servo Rail Capacitor

A 10 V 2200 µF electrolytic capacitor is included to reduce voltage dips caused by sudden servo movement. It is placed across the servo power rail.

The capacitor helps reduce instability when the servos start, stop, or change direction quickly.

## Full Robot CAD Design

Below is the current CAD design of the robot.

<img width="943" height="557" alt="image" src="https://github.com/user-attachments/assets/b25e1685-e9bd-48d3-87e1-750ac78114ed" />

## Arranged Parts


<img width="835" height="576" alt="arranged parts" src="https://github.com/user-attachments/assets/b39f0509-baff-4d99-9d17-59eca3a780a4" />

## Component List

- **ESP32-S3 Dual Type-C Development Board**  
  Main controller for the robot. It will control the servos, manage the OLED display, and support future Bluetooth-based control.

- **OLED Display Module**  
  Used as the robot’s dynamic face. It will show expressions, status indicators, and simple visual feedback.

- **MG996R Servos**  
  Used to move the robot’s four legs. These servos provide the main actuation for walking or crawling movement.

- **Protoboard**  
  Used to organize and connect the robot’s electronic components, including the ESP32-S3, OLED display, servo signal wires, and power connections.

- **LM2596 Step-Down Converter Module**  
  Used to regulate voltage for the robot’s electronics or servo power rail.

- **10 V 2200 µF Capacitor**  
  Placed across the servo power rail to reduce voltage drops when the servos move suddenly.

- **3.7 V 1000 mAh Li-Po Battery**  
  Used as a compact battery source for low-current electronics or testing circuits.
## Wiring

<img width="782" height="685" alt="image" src="https://github.com/user-attachments/assets/2d78a191-fc21-408c-b8cb-2530e2159f6c" />


## Current Status

The project is currently in the design and development stage. The mechanical body, servo mounting, OLED face placement, and electronics layout are being refined before final assembly and testing.

Completed or in progress:

- robot body CAD design
- servo mounting layout
- leg mechanism design
- OLED display integration
- component research
- basic firmware development
- BOM preparation
- power system planning

## Notes

This repository documents the full development process of tabletoprobot, including CAD design, electronics integration, wiring decisions, firmware development, component choices, and project progress.

The robot is designed as a compact experimental platform, so the design may change as the walking mechanism, weight distribution, power system, and servo behavior are tested.

## BOM List

| Name | Purpose | Quantity | Total Cost (USD) | Link | Distributor |
|---|---|---:|---:|---|---|
| 3.7V 1000mAh Li-Pol Battery | Powers low-current electronics such as the ESP32-S3, OLED display, and small testing circuits. | 1 | 5.82 | [Link](https://aliexpress.ru/item/1005003380188983.html?sku_id=12000032368701980&spm=a2g2w.productlist.search_results.0.7baf71100S9AxO) | Aliexpress |
| 10 V 2200 µF Capacitor | Reduces voltage dips on the servo power rail during sudden servo movement. | 1 | 1.91 | [Link](https://aliexpress.ru/item/1005011631970768.html?sku_id=12000056427936721&spm=a2g2w.productlist.search_results.2.10a414f4iK7Q4Y) | Aliexpress |
| LM2596 3V-40V to 1.5V-35V Step-Down Converter Module | Regulates voltage for the robot’s electronics or servo power rail. | 1 | 0.50 | [Link](https://aliexpress.ru/item/1005011787585923.html?sku_id=12000056552345476&spm=a2g2w.productlist.search_results.1.2bab691dHczbmi) | Aliexpress |
| Protoboard | Connects and organizes the robot’s electronic components during development and testing. | 1 | 2.18 | [Link](https://aliexpress.ru/item/1005012158303665.html?sku_id=12000057666044291&spm=a2g2w.productlist.search_results.6.585e22fbyNNOCV) | Aliexpress |
| OLED Display Module | Works as the robot’s dynamic face by showing expressions, status icons, and visual feedback. | 1 | 1.30 | [Link](https://aliexpress.ru/item/1005004860363043.html?sku_id=12000043386368896&spm=a2g2w.productlist.search_results.3.2336515365HacT) | Aliexpress |
| ESP32-S3 Dual Type-C Development Board | Main controller for servo output, OLED display control, and future Bluetooth control. | 1 | 3.42 | [Link](https://aliexpress.ru/item/1005006737960797.html?sku_id=12000038137904831&spm=a2g2w.productlist.search_results.12.2dd54037b9g1wO) | Aliexpress |
| Standard Servo MG996R | Moves the robot’s legs and provides the main mechanical actuation. | 4 | 14.01 | [Link](https://aliexpress.ru/item/32995892007.html?spm=a2g2w.cart.cart_split.2.5aae4aa6p0Ni1m&sku_id=66923190373) | Aliexpress |

## Estimated Total Cost

Total: 29.14 USD
