
//Question Link : https://leetcode.com/problems/spiral-matrix-iv/description/?envType=daily-question&envId=2024-09-09

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 // TC: O(n^2)
 // SC: O(n^2)


class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        vector<vector<int>>ans(m,vector<int>(n,-1));
        ListNode* temp=head;
        int left=0,right=n-1,top=0,down=m-1;

        while(temp!=NULL && left<=right && top<=down){

            //going left to right 
            for(int i=left;i<=right;i++){
                ans[top][i]=temp->val;
                temp=temp->next;
                if(temp==NULL)return ans;
            }
             
            top++; //i forgot this line
            
            //top to down go
            for(int i=top;i<=down;i++){
                ans[i][right]=temp->val;
                temp=temp->next;
                if(temp==NULL)return ans;
            }

            right--; //forgot
            
            if(left>right || top>down)return ans;
            
            //going right to left
            for(int i=right;i>=left;i--){
                ans[down][i]=temp->val;
                temp=temp->next;
                if(temp==NULL)return ans;
            }

            down--;
            
            for(int i=down;i>=top;i--){
                ans[i][left]=temp->val;
                temp=temp->next;
                if(temp==NULL)return ans;
            }
            left++;
        }
        return ans;
    }
};