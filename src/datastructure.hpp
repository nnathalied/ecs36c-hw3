/* 
* DO NOT CHANGE THIS FILE
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

typedef struct TreeNode { 
   int key;
   int val;
   bool flag;
   int num_children;
   TreeNode **children;
} TreeNode; 

class Tree {
    protected:
        TreeNode* root;
        int max_width;
    public:
        Tree(int width);
        int get_height();
        string left_view();
        string right_view();
        void insert_node(int key, int val);
        void delete_node(int val);
        static void solution(const char *input_path, const char *output_path);

};

class BST: public Tree {
    protected:
        int max_width = 2;
    public:
        BST();
        TreeNode* get_left(int key);
        TreeNode* get_right(int key);
        string top_view();
        string bottom_view();
        void rebalance();
        void insert(int key, int val);
        void del(int key);
        static void solution(const char *input_path, const char *output_path);
};
