# **🂶 card.cpp**

A simple terminal-based implementation of the classic **card.cpp** card game written in C++.

The program displays three cards, performs a series of swaps, and challenges the player to track the **Jack of Hearts** and guess its final position.

## Features

* Uses a custom `card` structure to represent playing cards
* Demonstrates basic C++ concepts:

  * Structures (`struct`)
  * Variables and constants
  * User input/output
  * Switch statements
  * Thread sleeping (`std::this_thread::sleep_for`)
* Simulates card shuffling through swaps
* Win/Lose game logic

## How It Works

The game starts with three cards:

| Position | Card             |
| -------- | ---------------- |
| 1        | 7 of Clubs       |
| 2        | Jack of Hearts   |
| 3        | King of Diamonds |

The program then performs these swaps:

1. Swap card 2 and card 3
2. Swap card 1 and card 3
3. Swap card 1 and card 2

After the swaps, the player must guess where the **Jack of Hearts** ended up.

## Example

```text
Card 1 is 7 of club
Card 2 is jack of hearts
Card 3 is king of diamonds

I am swapping card 2 and 3
I am swapping card 1 and 3
I am swapping card 1 and 2

Now, where (1,2 or 3) is the jack of hearts?
```

## Building

### Linux / macOS

```bash
g++ main.cpp -o card -std=c++11
./main
```

### Windows

```bash
g++ main.cpp -o card.exe -std=c++11
main.exe
```

## Notes

* The program currently uses:

```cpp
system("clear");
```

which works on Linux and macOS. On Windows, replace it with:

```cpp
system("cls");
```

or use a platform-independent screen-clearing method.

* The game waits 7 seconds before asking for a guess:

```cpp
this_thread::sleep_for(std::chrono::seconds(7));
```

giving the player time to follow the card movements.

## Future Improvements

* Randomized card shuffling
* Multiple rounds
* Score tracking
* Better card display using ASCII art
* Cross-platform screen clearing
* Input validation for invalid positions

## Learning Goals

This project is great for beginners learning:

* C++ syntax
* Structs
* Functions
* Control flow
* User interaction
* Basic game programming concepts

## License

This project is open source and available under the Apache License Version 2.0
