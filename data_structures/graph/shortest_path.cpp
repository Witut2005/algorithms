
#include <bits/stdc++.h>

std::unordered_map<char, int32_t> vertex_data;


int shortest_path(std::unordered_map<char, std::vector<std::pair<char, int32_t>>> graph, char start, char end, int how_many_vertex)
{

    std::deque<char> queue;

    vertex_data.insert({start, 0});

    for(auto it = graph.begin(); it != graph.end(); it++)
        vertex_data.insert({it->first, 0x0});

    char current_node = start;

    //current_node = current_node
    //a.second - alternative way
    //it-> second - used way 


    while(current_node!= end)
    {
        for(auto a : graph[current_node])
        {
            
            if(a.first == '\0')
                continue;


            auto it = vertex_data.find(a.first);
                
            if(a.second + vertex_data[current_node] < it->second) 
                it->second = a.second + vertex_data[current_node];

            if(std::find(queue.begin(), queue.end(), a.first) == queue.end())
                it->second = vertex_data[current_node] + a.second + it->second;

            if(std::find(queue.begin(), queue.end(), a.first) == queue.end())
                queue.push_back(a.first);
        }

        current_node = queue.front();
        queue.pop_front();
    
    }

    return vertex_data[end];

}

int main(void)
{

    std::unordered_map<char, std::vector<std::pair<char,int32_t>>> graph = 
    {
    
        {'a',{{'b', 3}, {'c',6}}},
        {'b',{{'c', 4}, {'d',4}, {'e',11}}},
        {'c',{{'d', 8}, {'g', 11}}},
        {'d',{{'e',-4}, {'g',2}, {'f',5}}},
        {'e',{{'h',9}}},
        {'f',{{'h',1}}},
        {'g',{{'h',2}}},
        {'h',{{'\0',0xffff}}}



    };


    std::cout << "your shortest path: " << shortest_path(graph, 'a', 'h', 8) << std::endl;

}
