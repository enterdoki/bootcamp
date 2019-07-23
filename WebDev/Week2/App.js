import React, {Component} from 'react';
import Typography from "@material-ui/core/Typography";
import ContactCard from "./Components/ContactCard/ContactCard";
import Decrement from "./Components/Decrement/Decrement";
import './App.css';

class App extends Component {
  constructor(props) {
    super(props);
    this.state={

    };
  }


  render () {
      return (
        <div className = "App">
          <div className = "Title">
            <Typography variant="h3" color="primary">
              Contact Card
            </Typography>
          </div>
          <div className = "Contact">
            <ContactCard/>
            <ContactCard/>
            <ContactCard/>
            <Decrement number = "20"></Decrement>
          </div>
          
        </div>

      );
  }
}


export default App;
