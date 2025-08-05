# Part 1: Build and run with library version 1.0.0

1. Configure the project with CMake
   ```bash
   mkdir build
   cmake -Bbuild .
   ```
2. Build the main application using the default `lib-v1`
   ```bash
   cmake --build ./build --target calculator_app
   ```
3. Run the application
   ```bash
   ./build/calculator_app
   ```

   You should see the following output:

   > Calculator library version 1.0.0  
   Performing addition...  
   5.73587 + 3.28124 = 9.01711  
   Last result value: 9.01711

> [!TIP]  
> Notice that this displays the version of the library that this particular executable is using as well as the
value of the variable storing the result from the last addition operation.

# Part 2: Build and run with library version 2.0.0

1. Rebuild the app with `lib-v2`
   ```bash
   cmake -Bbuild -DLIB_VER=2 .
   cmake --build ./build --target calculator_app
   ```
2. What happened? Why did it happen? How do we fix it?
3. Run the application
   ```bash
   ./build/calculator_app
   ```

   You should see the following output:
   
   > Calculator library version 2.0.0  
   Performing addition...  
   5.73587 + 3.28124 = 9.01711  
   Last result value: 9.01711

# Part 3: Run with library version 3.0.0

1. Build just the library, `lib-v3`
   ```bash
   cmake -Bbuild -DLIB_VER=3 .
   cmake --build ./build --target calculator
   ```
2. Run the application
   ```bash
   ./build/calculator_app
   ```
3. What happened? Why did it happen? How do we fix it?
