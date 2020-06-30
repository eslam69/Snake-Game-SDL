# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.
<!--
## Additional Functionality

I added another mode to the game where the computer can play the game itself, at the start of the game the user will choose one of 2 choices: 
1. to play the game in normal mode.
2. to let the computer play. :robot:

The `player.h` and `player.cpp` files contain the implementation of the computer player functionalities. The original files are slightly modifeid:

1. `main.cpp` prompts the user input to choose the game mode.
2. `game.h` and `game.cpp`. The `Game` class uniquely owns the `Player` objects that are dynamically initialized on the heap. The game constructor receives the game mode. If the user is playing, the `unique_ptr` remains uninitialized. If the computer is playing, the constructor initializes the `unique_ptr` and the instance of player.
3. `player.h` and `player.cpp`. The `Player` class is initialized with pointer addresses to the food and snake objects. Since the instance is allocated on the heap, calls to the class constructor and destructor are signaled to the console. The method `void play()` runs a simple search for the food and generate a key press event to set the direction of the snake.

## Rubric Points Addressed

### Loops, Functions, I/O
|Criteria| Description|
|--------|------------|
|The project demonstrates an understanding of C++ functions and control structures.|The initialization of the player is managed by `Game::SetPlayer()` and its execution by `Player::play()`. These functions package the core aspects of the functionality added, resulting in very minimal changes to the original code base.|
|The project accepts user input and processes the input.|I read the user's choice of game mode with `cin`, code the control flow defensively, and pass the choice of mode to the `Game` constructor.|

### Object Oriented Programming
|Criteria| Description|
|--------|------------|
|Classes use appropriate access specifiers for class members.|`Game` has a private unique pointer to its `Player` instance. Furthermore, `Player` contains a public `void play()` that is called from `Game::Run`. Its pointers to food and snake, however, are kept private since they are only necessary to implement the play method. |
|Class constructors utilize member initialization lists.|`Player`'s constructor uses initialization lists to define its private pointers.|
|Classes abstract implementation details from their interfaces.| `Player::play` abstracts the details of the player's strategies. `main` never sees the player and `Game` merely calls this function.|
|Classes follow an appropriate inheritance hierarchy.| `Player` is used as component of `Game` .|


### Memory Management
|Criteria| Description|
|--------|------------|
|The project uses scope / Resource Acquisition Is Initialization (RAII) where appropriate.|`Game` instances on self-playing mode utilize RAII with respect to its heap-allocated `Player` member. `Game`'s contructor initializes the unique pointer to the `Player` that the instance owns. Due to the utilization of a smart pointer, the player instance is deallocated when the pointer goes out of code (i.e., when the `Game` instance is destroyed).|
|The project uses smart pointers instead of raw pointers.|I use smart pointers as appropriate where i used a unique pointer that points to a player object as private member of the `Game` Class  |
-->
