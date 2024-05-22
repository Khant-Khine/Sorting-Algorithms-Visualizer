# Sorting Algorithms Visualizer
The project aims to help visualize the effect of arrays which have had elements entered in randomly, in order, or in reverse order, to help gauge how they impact the sorting algorithms such as merge sort, insertion sort, and selection sort. The user first enters the number of elemnts they want in their array and the program displays how many switches were made in sorting these arrays. By analyzing the outputs produced by the program, it helps visualize the scenarios to use different sorting algorithms, as well as how data should be stored to obtain a sorted result with the minimal memory usage and time complexity.

## How to Install and Run
<ol>
<li>
This project uses the C++ programming language and was coded on CodeBlocks IDE. Therefore to run this project, please install the CodeBlocks IDE binary release and follow the instructions shown. The version you download will differ based on the operating system of your computer. <a href=https://www.codeblocks.org/downloads/binaries/>This</a> is the link for the installation.
</li>
<br>

<li>
After suceesful installation of the CodeBlocks IDE, please open the newly installed CodeBlocks IDE. Then, click the "File" icon on the top left-most corner of the screen. From the dropdown menu, please select "New" and select "Project". A pop up window should open, and from that window, please select "Console Application". The following image will help in following the steps mentioned above.
<img src="https://github.com/Khant-Khine/Sorting-Algorithms-Visualizer/assets/155600182/af186365-90d5-4839-9d16-bcb3308a863b">
</li>
<br>

<li>
Now, we will create the project. Please select "C++" as the language to be used. Then, click "Next". Afterwards, please provide a suitable name for the project and click "Next". Finally, we click "Finish" to finish creating the project. You have now successfully created the project! Let us now download and import the files provided in this repository to our newly created project. Please download the included files within this repository. They are:
<ul>
<li>
Driver.cpp
</li>
<li>
InsertionSorter.h
</li>
<li>
MergeSorter.h
</li>
<li>
SelectionSorter.cpp
</li>
</ul>
</li>
<br>

<li>
After successful download, please return to the CodeBlocks IDE and go to the management tab located on the left side of the screen. You should see your project name located there. Please right click on your project name and click "Add Files".
<img src="https://github.com/Khant-Khine/Sorting-Algorithms-Visualizer/assets/155600182/05da4006-eeb0-4f32-ac93-d4c3cb1515b0">
</li>
<br>

<li>
Select all the files you downloaded from the repository in your Downloads and click "Open". There is an additional file provided by within by the project called "main.cpp". You can delete this file by right clicking the main.cpp file and selecting "Remove file from project". Since we have all the files needed for the program, we can run the program by clicking the "Build and Run" button as shown in the following image:
<img src="https://github.com/Khant-Khine/Sorting-Algorithms-Visualizer/assets/155600182/d5278d54-6c9a-4f1b-af96-f45b15ce0b49">
</li>
</ol>

## Program Usage
Since the program has successfully compiled, you will now be presented with this screen: 

<img src="https://github.com/Khant-Khine/Sorting-Algorithms-Visualizer/assets/155600182/c061b11c-0979-4658-a971-55a631d04f71">

This is the screen of the program where you will be prompted to enter the size of an array. Please enter a size of an array you would like to use for this program. The program will then display the number of times the elements within this array are changed to obtain a sorted array. The use sorting methods used are Merge Sort, Insertion Sort, and Selection Sort. Elements in the tested array are inserted in order, in reverse, and in reverse. This program only displays the number of exchanges made within the sorting, it does not provide the memory usage of each sorting algorithm. For example, here is an instance when a ten element array is sorted:

<img src="https://github.com/Khant-Khine/Sorting-Algorithms-Visualizer/assets/155600182/3d4774d3-c90f-4edd-9e5f-bbfa6633966f">

Now, you can have fun and enter different size arrays and see how efficient each sorting algorithm is in sorting them. This will give you an idea on which sorting algorithm to use for your required task. Have fun using the program! For those further interested in this program, I have provided the following section for more details.

## Information of Program



