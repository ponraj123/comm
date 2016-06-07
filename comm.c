String findLongPrefix(String [] str) 

{
                StringBuilder strBuilder = new StringBuilder();
                
                char [] firstStr = str[0].toCharArray();
                for(int i=0; i< str[0].length(); i++ ) {
                        boolean found = true;
                        for(String str: str) {
                                if(str.charAt(i) != firstStr[i]) {
                                        found = false;
                                        break;
                                } 
                        }
                        
                        if(found) {
                                strBuilder.append(firstStr[i]);
                        } else 
                                break;
                        
                }
                
                return strBuilder.toString();
        }


