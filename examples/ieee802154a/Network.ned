package org.mixim.examples.ieee802154a;

import org.mixim.base.connectionManager.ConnectionManager;
import org.mixim.base.modules.BaseWorldUtility;

module Network
{
    parameters:
        double playgroundSizeX; // x size of the area the nodes are in (in meters)
        double playgroundSizeY; // y size of the area the nodes are in (in meters)
        double playgroundSizeZ; // z size of the area the nodes are in (in meters)
        double numHosts; // total number of hosts in the network

        @display("bgb=$playgroundSizeX,$playgroundSizeY,white,,;bgp=10,50");
    submodules:
        world: BaseWorldUtility {
            parameters:
                playgroundSizeX = playgroundSizeX;
                playgroundSizeY = playgroundSizeY;
                playgroundSizeZ = playgroundSizeZ;
                @display("p=250,0;i=misc/globe");

        }
        channelControl: ConnectionManager {
            parameters:
                @display("p=450,0;b=42,42,rect,red,,;i=abstract/multicast");

        }
        node[numHosts]: IEEE802154APhyMacHost {
            parameters:
                numHosts = numHosts;
                @display("p=50,50;b=42,42,rect,red,,;i=device/wifilaptop");

        }
    connections allowunconnected:
                         // all connections and gates are to be generated dynamically

}

network phySim extends Network
{
    parameters:
}
