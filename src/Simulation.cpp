#include "Simulation.h"
#include "Agent.h"
#include "Party.h"
#include "Graph.h"
#include "vector"
Simulation::Simulation(Graph graph, vector<Agent> agents) : mGraph(graph), mAgents(agents) 
{
    // You can change the implementation of the constructor, but not the signature!
}

void Simulation::step()
{
    // TODO: implement this method
    // apllyning party step.
    
    for ( int i=0 ; i<mGraph.getNumVertices() ; i++)
       {
          //mGraph[i].getParty.step()
       }
        
    
}

bool Simulation::shouldTerminate() const
{
    // TODO implement this method today
    
    return true;
}

const Graph &Simulation::getGraph() const
{
    return mGraph;
}

const vector<Agent> &Simulation::getAgents() const
{
    return mAgents;
}

const Party &Simulation::getParty(int partyId) const
{
    return mGraph.getParty(partyId);
}

/// This method returns a "coalition" vector, where each element is a vector of party IDs in the coalition.
/// At the simulation initialization - the result will be [[agent0.partyId], [agent1.partyId], ...]
const vector<vector<int>> Simulation::getPartiesByCoalitions() const
{
    // TODO: you MUST implement this method for getting proper output, read the documentation above.
    return vector<vector<int>>();
}
