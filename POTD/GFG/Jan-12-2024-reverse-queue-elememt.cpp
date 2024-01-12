queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int>st;
        int m=q.size()-k;
        for(int i=0;i<k;i++){
            int front=q.front();
            q.pop();
            st.push(front);
        }
        for(int i=0;i<k;i++){
            int front=st.top();
            st.pop();
            q.push(front);
        }
        for(int i=0;i<m;i++){
            int front=q.front();
            q.pop();
            q.push(front);
        }
        return q;
    }
