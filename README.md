# 八数码问题

## 目的
To implement the UI for the 8-puzzle problem with Four Strategies of Tree Search Algorithm (The simple game UI)

## 过程
### Step1： 
We first implement four search methods, which are BFS(Breath-First-Search), DFS(Depth-First-Search), BFS(Best-First-Search), Brunch and Bound. 
For depth-first search, you start from the initial state and search all the way to the target state, I set the depth limit here to 100, if the recursion depth is greater than 100, this path can not find results, then change to another path.

![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122503_bb536270_8639955.png "屏幕截图.png")


For breadth-first search, we start from the initial state and gradually expand its children until we find the final result, using the data structure of a queue.

![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122541_23decb6b_8639955.png "屏幕截图.png")

For the best-first search, the basic steps are similar to the breadth-first search, both start from the initial state and keep expanding its children until the target state is found, but the difference is that after each expansion, the current state is sorted and the best node is selected for expansion, where the criterion is how many cells of the current node are the same as the target state

![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122600_cad7c9ab_8639955.png "屏幕截图.png")

  For the branch-and-bound method, We use the hill climbing method to find a better solution and then use the depth of that solution as a lower bound to prune the other branches, that is, if the depth of that node is greater than the lower bound, then prune it until the queue is empty. In this case, we find the best solution.

![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122617_0c4dcf46_8639955.png "屏幕截图.png")

### Step2: 
   To avoiding duplicate states, here use unordered_set in C++ to determine if this state has occurred
### Step 3:
  We use random_shuffle() function of C++ to randomly disrupt an array. We then need to determine in advance whether this sequence has a solution, to avoid the attrition of unnecessary searches. We determine whether the current inverse order of this randomly generated sequence is the same parity as the inverse order of the target result.
### Step 4:
   We use qt with C++ to design the GUI.
## Major Procedure：

The main GUI

![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122642_2643d92e_8639955.png "屏幕截图.png")

If you don’t choose any search way, click “Run” button, then pop up a tip box 


![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122657_c236348b_8639955.png "屏幕截图.png")

 
The “Initialization” button is to randomlize the sequence, such as that

![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122755_50b71b15_8639955.png "屏幕截图.png")
    

If it is not solution, it will pop up a tip box

![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122817_a711dafa_8639955.png "屏幕截图.png")
   
If it has solution, its result of time and step will be displayed.
       
![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122843_e00507b6_8639955.png "屏幕截图.png")

![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122857_b142fbdf_8639955.png "屏幕截图.png")

![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122909_c57a04e9_8639955.png "屏幕截图.png")

![输入图片说明](https://images.gitee.com/uploads/images/2022/0724/122920_e20dada2_8639955.png "屏幕截图.png")

By the way, in Branch and Bound method, it costs much time,please wait patiently. 
    

