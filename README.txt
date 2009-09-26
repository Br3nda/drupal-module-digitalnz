// $Id: README.txt,v 1.1 2009/09/26 21:46:40 jonathanhunt Exp $

The DigitalNZ API is a collection of modules providing metadata search of
New Zealand digital content via the DigitalNZ web services API.

For more information about DigitalNZ see http://digitalnz.org

A DigitalNZ API key is required to use this module.

For API information and API keys, see http://digitalnz.org/developer

This module was produced at the DigitalNZ-sponsored Christchurch Hackfest, 12 September 2009.

Modules
- DigitalNZ API
This module provides settings for the DigitalNZ API endpoint including your API key.
It provides functions that directly call the web services API, but doesn't provide
end-user features.

- DigitalNZ Search
This module enables an alternative search tab beside the default node and user search tabs.

Installation
 - Copy the module to the desired directory, e.g sites/all/modules/digitalnz.
 - Go to Administer > Site building > Modules
 - Enable DigitalNZ API
 - Enable DigitalNZ Search if you want to offer search to your site users.
 - Enter your API key at Administer > Site configuration > DigitalNZ API.
 - You can change the number of rows returned at Administer > Site configuration > DigitalNZ Search.

Usage
Once enabled, do a search on your Drupal site. Select the DigitalNZ tab to submit
the search to DigitalNZ.

If results are returned, you can sort them by various criteria:
Relevancy
Title
Type
Provider (DigitalNZ content partner)
Date

Roadmap
There are many features that could be added to this module. Feel free to offer patches or
suggestions via the Drupal.org issue queue for this module.

Jonathan Hunt
digitalnz_api.module@huntdesign.co.nz
http://huntdesign.co.nz