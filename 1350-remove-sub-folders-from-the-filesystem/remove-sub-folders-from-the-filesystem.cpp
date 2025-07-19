class Solution {
public:

    struct node {
        unordered_map<string, node*> links;
        bool flag = false;

        bool notcontains(string& c) { return links.find(c) == links.end(); }

        void setchar(string& c, node* root) { links[c] = root; }

        node* getnext(string& c) { return links[c]; }

        void setflag() { flag = true; }
    };

    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string> ans;
        sort(folder.begin(), folder.end());
        node* root = new node();
        for (auto x : folder) {
            int i = 1;
            node* temp = root;
            bool issub = false;
            string part;
            while(i < x.size()){
                part.clear();
                while(i < x.size() && x[i] != '/'){
                    part += x[i];
                    i++;
                }
                i++;
                if(temp->notcontains(part)){
                    temp->setchar(part, new node());
                }
                temp = temp->getnext(part);
                if(temp->flag){
                    issub = true;
                    break;
                }
            }
            if(!issub){
                temp->setflag();
                ans.push_back(x);
            }
        }
        return ans;
    }
};