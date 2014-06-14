// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2011-2012 Litecoin Developers
// Copyright (c) 2013 Blazecoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "main.h"
#include "uint256.h"

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    //

	// no checkpoint now, can be added in later releases
    static MapCheckpoints mapCheckpoints =
            boost::assign::map_list_of
            (  0,    uint256("0x5d871c1b6ea542c2bb8a3b3ac70028a591bbf81369e90c2446c1a2bbfb89459b"))
            ( 18500, uint256("0x6cfc4decf7c26c037c621190681f9b3f12912f8330b06c652e0c193340a23347"))
            ( 33000, uint256("0xcfd0eb628a7fee82accc4e2f183cdd1abd08afeedf2b1b030230836a4e74629e"))
            ( 60413, uint256("0x99ea9310aac366b03161254d77ada05c9eb1392ca8ca370885b013f80d41f56e"))
			;

    bool CheckBlock(int nHeight, const uint256& hash)
    {
        if (fTestNet) return true; // Testnet has no checkpoints

        MapCheckpoints::const_iterator i = mapCheckpoints.find(nHeight);
        if (i == mapCheckpoints.end()) return true;
        return hash == i->second;
		// return true;
    }

    int GetTotalBlocksEstimate()
    {
        if (fTestNet) return 0;

        return mapCheckpoints.rbegin()->first;
		// return 0;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        if (fTestNet) return NULL;

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, mapCheckpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
				// return NULL;
        }
        return NULL;
    }
}
