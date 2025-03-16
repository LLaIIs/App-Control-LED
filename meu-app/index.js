import { registerRootComponent } from 'expo';

import layout from './app/_layout';

// registerRootComponent calls AppRegistry.registerComponent('main', () => App);
// It also ensures that whet her you load the app in Expo Go or in a native build,
// the environment is set up appropriately
registerRootComponent(layout);
