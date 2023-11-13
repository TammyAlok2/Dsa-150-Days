
      if( str1.size() != str2.size())
            return false;
        
        vector<pair<char,char>> temp1,temp2;
        for ( int i =0 ; i < str1.size() ; i++)
        {
            temp1.push_back({str1[i],str2[i]});
            temp2.push_back({str2[i],str1[i]});
        }
            
        set<char> x1,y1;
        set<pair<char,char>> x2,y2;
         for ( int i = 0; i < str1.size() ; i++)
        {
            x1.insert(str1[i]); 
            x2.insert(temp1[i]);
            
            y1.insert(str2[i]);
            y2.insert(temp2[i]);
        }        
            
        if ( x1.size() == x2.size()  &&   y1.size() == y2.size() )
            return true;
        else
            return false;
        
    }
